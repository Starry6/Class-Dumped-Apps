@interface VSAccountSerializationCenter : NSObject
@property (nonatomic) NSOperationQueue serializationQueue;
@property (nonatomic) VSPersistentStorage storage;
@property (nonatomic) NSUndoManager undoManager;
- (id)init;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
- (void)setUndoManager:;
- (id)undoManager;
- (id)serializationQueue;
- (id)exportDataWithCompletionHandler:;
- (id)importData:withCompletionHandler:;
- (void)setSerializationQueue:;
+ (id)defaultSerializationCenter;
@end
