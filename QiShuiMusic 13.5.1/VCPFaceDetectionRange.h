@interface VCPFaceDetectionRange : NSObject
@property (nonatomic) {?=qiIq} start;
@property (nonatomic) {?=qiIq} last;
@property (nonatomic) Q flags;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) Q position;
@property (nonatomic) Q faceID;
- (void)setPosition:;
- (void)setLast:;
- (void)setStart:;
- (unsigned long long)position;
- (id)last;
- (id)start;
- (void)setBounds:;
- (void)setFlags:;
- (id)bounds;
- (unsigned long long)flags;
- (unsigned long long)faceID;
- (void)setFaceID:;
@end
