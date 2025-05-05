@interface IESECCommentStatModel : MTLModel
@property (nonatomic) NSNumber statID;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSString caption;
@property (nonatomic) NSString statTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isImpressionTag;
- (id)commentTagID;
- (id)commentTagName;
- (id)commentTagNumber;
- (id)commentTagTrackerName;
- (id)sentimentTrackerString;
- (void)setStatID:;
- (void)setStatTitle:;
- (id)statID;
- (id)statTitle;
- (void)setCount:;
- (id)init;
- (id)caption;
- (void)setCaption:;
- (void).cxx_destruct;
- (id)count;
- (BOOL)isPositive;
+ (id)JSONKeyPathsByPropertyKey;
@end
