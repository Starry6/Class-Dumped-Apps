@interface IESLiveSaaSImageToastNode : NSObject
@property (nonatomic) NSAttributedString message;
@property (nonatomic) NSArray imageUrlList;
@property (nonatomic) double duration;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL showMongoliaLayer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isCoin;
- (id)imageUrlList;
- (BOOL)isCoin;
- (void)setImageUrlList:;
- (void)setIsCoin:;
- (void)setShowMongoliaLayer:;
- (BOOL)showMongoliaLayer;
- (void)setBackgroundColor:;
- (BOOL)valid;
- (void)setMessage:;
- (id)backgroundColor;
- (void)setWidth:;
- (double)height;
- (void)setDuration:;
- (double)width;
- (void)setCornerRadius:;
- (id)message;
- (void)setHeight:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (double)duration;
@end
