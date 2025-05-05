@interface UIWebPDFSearchResult : NSObject
@property (nonatomic) Q pageIndex;
@property (nonatomic) NSString string;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) NSArray strings;
@property (nonatomic) NSArray rects;
@property (nonatomic) NSArray rotationAngles;
- (id)string;
- (id)boundingBox;
- (void)dealloc;
- (void)setString:;
- (void)setPageIndex:;
- (id)strings;
- (unsigned long long)pageIndex;
- (void)setRects:;
- (void)setStrings:;
- (id)rects;
- (id)rotationAngles;
- (void)setRotationAngles:;
- (void)setBoundingBox:;
@end
