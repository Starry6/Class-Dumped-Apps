@interface IESLivePinImCommonParams : NSObject
@property (nonatomic) @ message;
@property (nonatomic) BOOL usePictureTextStyle;
@property (nonatomic) NSAttributedString contentAttr;
@property (nonatomic) NSAttributedString descAttr;
@property (nonatomic) HTSLiveImage imageIcon;
@property (nonatomic) NSString schema;
- (void)setContentAttr:;
- (id)contentAttr;
- (id)descAttr;
- (id)imageIcon;
- (void)setDescAttr:;
- (void)setImageIcon:;
- (void)setUsePictureTextStyle:;
- (BOOL)usePictureTextStyle;
- (id)schema;
- (void)setMessage:;
- (void)setSchema:;
- (id)message;
- (void).cxx_destruct;
@end
