@interface AWEContentPreferenceRecordModel : MTLModel
@property (nonatomic) q labelShownCount;
@property (nonatomic) q labelHiddenCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)labelShownCount;
- (void)setLabelShownCount:;
- (long long)labelHiddenCount;
- (void)setLabelHiddenCount:;
- (id)init;
@end
