@interface AASuspensionInfo : NSObject
@property (nonatomic) BOOL iCloudSuspended;
@property (nonatomic) BOOL familySuspended;
- (id)init;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isiCloudSuspended;
- (BOOL)isFamilySuspended;
@end
