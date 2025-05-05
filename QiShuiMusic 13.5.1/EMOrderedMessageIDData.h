@interface EMOrderedMessageIDData : NSObject
@property (nonatomic) NSArray objectIDs;
@property (nonatomic) NSDictionary objectIDByPersistentID;
- (id)objectIDs;
- (void).cxx_destruct;
- (void)setObjectIDs:;
- (id)initWithObjectIDs:objectIDByPersistentID:;
- (id)objectIDByPersistentID;
- (void)setObjectIDByPersistentID:;
@end
