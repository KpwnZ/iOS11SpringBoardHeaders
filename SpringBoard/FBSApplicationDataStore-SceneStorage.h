//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/FBSApplicationDataStore.h>

@interface FBSApplicationDataStore (SceneStorage)
- (void)_removeAllPersistentSceneData;
- (void)_modifyPersistentSceneData:(unsigned long long)arg1 identifier:(id)arg2 data:(id)arg3;
- (id)_fetchPersistedSceneDataStores;
- (id)_createSceneStoreWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_setCachedSceneDataStores:(id)arg1;
- (id)_cachedSceneDataStores;
- (void)removeAllSceneDataStores;
- (void)removeSceneStoreForIdentifier:(id)arg1;
- (id)sceneStoreForIdentifier:(id)arg1 creatingIfNecessary:(_Bool)arg2;
@end
