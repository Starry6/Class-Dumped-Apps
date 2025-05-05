@interface CRScriptCategoryResult : NSObject
@property (nonatomic) CRScriptCategory scriptCategory;
@property (nonatomic) float probability;
@property (nonatomic) float valid;
- (float)valid;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (float)probability;
- (id)initWithScriptCategory:probability:;
- (id)scriptCategory;
@end
