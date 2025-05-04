@interface AWEProfileAnchorRecordModel : NSObject
@property (nonatomic) q recordType;
@property (nonatomic) NSMutableDictionary recordResult;
- (id)resultModelWith:;
- (id)recordResult;
- (void)setRecordResult:;
- (id)init;
- (long long)recordType;
- (void).cxx_destruct;
- (void)setRecordType:;
@end
