@interface IESLivePinCommonPicTextParams : NSObject
@property (nonatomic) @ metaData;
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
- (id)schema;
- (void)setMetaData:;
- (void)setSchema:;
- (id)metaData;
- (void).cxx_destruct;
@end
