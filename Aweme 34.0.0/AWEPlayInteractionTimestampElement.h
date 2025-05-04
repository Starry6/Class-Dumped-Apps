@interface AWEPlayInteractionTimestampElement : AWEPlayInteractionLeftElement
@property (nonatomic) UILabel timestampLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)updateTimestampWithModel:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setTimestampLabel:;
- (id)timestampLabel;
- (void)setUpUI;
+ (BOOL)shouldActiveWithData:context:;
+ (id)activateInfoWithContext:;
+ (id)dateFormatterForFull;
+ (id)formattedDateForFullTimestamp:;
@end
