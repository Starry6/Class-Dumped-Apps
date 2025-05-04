@interface AWEFeedTabJumpStorage : MTLModel
@property (nonatomic) NSArray showRecords;
@property (nonatomic) NSArray itemStorages;
@property (nonatomic) NSArray showRecordsForExit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showRecords;
- (void)setShowRecords:;
- (id)itemStorages;
- (void)setItemStorages:;
- (id)showRecordsForExit;
- (void)setShowRecordsForExit:;
- (void).cxx_destruct;
+ (id)showRecordsJSONTransformer;
+ (id)itemStoragesJSONTransformer;
+ (id)showRecordsForExitJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
