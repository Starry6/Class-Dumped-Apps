@interface BDXLynxTextLayoutModel : NSObject
@property (nonatomic) BDXLynxRichTextStyle textStyle;
@property (nonatomic) YYTextLayout textLayout;
@property (nonatomic) NSAttributedString truncationToken;
- (id)truncationLabel;
- (void)createLayoutWithContainerSize:;
- (void)createTruncationToken:;
- (id)textStyle;
- (void)setTextStyle:;
- (void).cxx_destruct;
- (void)setTextLayout:;
- (id)textLayout;
- (id)truncationToken;
- (void)setTruncationToken:;
+ (id)createTextModelWithStyle:;
@end
