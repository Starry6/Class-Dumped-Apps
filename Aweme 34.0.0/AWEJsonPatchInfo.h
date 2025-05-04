@interface AWEJsonPatchInfo : NSObject
@property (nonatomic) q opType;
@property (nonatomic) @ valueObject;
@property (nonatomic) AWEJsonPatchPath path;
- (void)setOpType:;
- (long long)opType;
- (id)valueObject;
- (void)setValueObject:;
- (id)path;
- (void).cxx_destruct;
- (void)setPath:;
+ (id)createJsonPatchInfoWithDictionary:;
@end
