@interface AWECommentMediaFeedBasicParams : NSObject
@property (nonatomic) AWEPageContext preNode;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)enterFrom;
- (id)preNode;
- (id)initWithPreNode:;
- (void).cxx_destruct;
- (void)setIsLandscape:;
- (BOOL)isLandscape;
@end
