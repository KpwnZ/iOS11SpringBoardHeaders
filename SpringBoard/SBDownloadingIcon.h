//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBLeafIcon.h"

@class SBApplicationPlaceholder;

@interface SBDownloadingIcon : SBLeafIcon
{
    _Bool _wasUninstalledByUser;
    SBApplicationPlaceholder *_appPlaceholder;
}

+ (id)leafIdentifierForApplicationPlaceholderBundleID:(id)arg1;
- (void).cxx_destruct;
- (id)appPlaceholder;
- (_Bool)isDownloadingIcon;
- (void)cancelDownload;
- (id)uninstallAlertBody;
- (void)setUninstalledByUser:(_Bool)arg1;
- (_Bool)uninstalledByUser;
- (void)setApplicationPlaceholder:(id)arg1;
- (void)reloadForStatusChange;
- (void)completeUninstall;
- (id)realDisplayName;
- (id)homescreenIconImage;
- (id)_darkenedIconImageForImage:(id)arg1;
- (id)gridCellImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationPlaceholder:(id)arg1;

@end

