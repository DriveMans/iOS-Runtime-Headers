/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface _STVocabularyStoreManager : NSObject {
    NSString *_appBundleID;
    NSString *_baseDirectoryPath;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic, copy) NSString *baseDirectoryPath;

+ (id)appDatastoreDirectoryForAppBundleID:(id)arg1;
+ (id)managerForBundleID:(id)arg1;
+ (id)sharedAppInstance;

- (void).cxx_destruct;
- (id)_baseDirectoryPathForIntentSlot:(id)arg1 error:(id*)arg2;
- (void)_clearConnection;
- (id)_connection;
- (id)_createDirectoryAtPath:(id)arg1;
- (id)_documentWithItems:(id)arg1 forIntentSlot:(id)arg2;
- (void)_postNotificationForError:(id)arg1;
- (id)_preventTaskSuspendForAppBundleID:(id)arg1;
- (id)_syncService;
- (id)appBundleID;
- (id)baseDirectoryPath;
- (void)dealloc;
- (void)deleteEverything;
- (id)getPathToLatestVocabulary:(id*)arg1 pathDuringReading:(id*)arg2 sentVocabulary:(id*)arg3 forIntentSlot:(id)arg4;
- (id)init;
- (id)initWithBaseDirectory:(id)arg1 appBundleID:(id)arg2 error:(id*)arg3;
- (void)noteLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2;
- (void)setAppBundleID:(id)arg1;
- (void)setBaseDirectoryPath:(id)arg1;

@end