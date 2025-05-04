@interface AWESearchScanSearchTabViewModel : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} detectionRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) BOOL hastracked;
@property (nonatomic) NSDictionary bbox;
@property (nonatomic) NSString tosID;
@property (nonatomic) NSString text;
@property (nonatomic) NSString imageUrl;
- (id)tosID;
- (void)setTosID:;
- (BOOL)hastracked;
- (void)setHastracked:;
- (void)setCropRect:;
- (id)cropRect;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)bbox;
- (void)setBbox:;
- (id)detectionRect;
- (void)setDetectionRect:;
@end
