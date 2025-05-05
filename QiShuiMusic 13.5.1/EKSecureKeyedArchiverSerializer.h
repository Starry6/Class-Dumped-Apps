@interface EKSecureKeyedArchiverSerializer : NSObject
@property (nonatomic) EKEventStore eventStore;
@property (nonatomic) NSString version;
- (id)version;
- (id)eventStore;
- (void).cxx_destruct;
- (id)serializeEvent:error:;
- (id)deserializeData:isNew:error:;
- (id)versionFromData:error:;
- (id)initWithEventStore:withVersion:;
@end
