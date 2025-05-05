@interface IESLiveRichTextPiece : NSObject
@property (nonatomic) Q type;
@property (nonatomic) <IESLiveImage> image;
@property (nonatomic) NSAttributedString attributedString;
- (void)setType:;
- (void)setAttributedString:;
- (void)setImage:;
- (id)attributedString;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)image;
@end
