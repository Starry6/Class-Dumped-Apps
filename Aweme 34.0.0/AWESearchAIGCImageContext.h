@interface AWESearchAIGCImageContext : NSObject
@property (nonatomic) BOOL isQuestionType;
@property (nonatomic) UIImage image;
@property (nonatomic) NSArray boxArray;
@property (nonatomic) q selectedIndex;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString preSearchId;
@property (nonatomic) BOOL isLatest;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)preSearchId;
- (BOOL)isLatest;
- (void)setIsLatest:;
- (id)boxArray;
- (void)setBoxArray:;
- (void)setPreSearchId:;
- (void)updateWithBubbleModel:;
- (BOOL)isQuestionType;
- (void)setSelectedIndex:;
- (id)image;
- (void)setImage:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (id)initWithImage:;
@end
