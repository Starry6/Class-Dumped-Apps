@interface SAGKSummaryPod : SAGKPodView
@property (nonatomic) NSString caption;
@property (nonatomic) SAUIImageResource imageResource;
@property (nonatomic) NSString text;
- (id)groupIdentifier;
- (void)setText:;
- (id)caption;
- (void)setCaption:;
- (id)encodedClassName;
- (id)text;
- (id)imageResource;
- (void)setImageResource:;
+ (id)summaryPod;
+ (id)summaryPodWithDictionary:context:;
@end
