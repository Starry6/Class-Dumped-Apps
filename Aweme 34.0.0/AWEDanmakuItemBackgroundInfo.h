@interface AWEDanmakuItemBackgroundInfo : NSObject
@property (nonatomic) SkityPaint borderPaint;
@property (nonatomic) SkityPaint borderGroundPaint;
@property (nonatomic) BOOL needShowOwnerBorder;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} borderFrame;
- (BOOL)needShowOwnerBorder;
- (void)setNeedShowOwnerBorder:;
- (id)borderFrame;
- (void)setBorderFrame:;
- (id)borderPaint;
- (void)setBorderPaint:;
- (id)borderGroundPaint;
- (void)setBorderGroundPaint:;
- (void).cxx_destruct;
@end
