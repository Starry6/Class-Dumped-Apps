@interface AWEVideoCoverEditorTextStyleCategoryItemModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) Q textStyle;
@property (nonatomic) q alignmentType;
@property (nonatomic) AWEStoryColor fontColor;
@property (nonatomic) BOOL isSelected;
- (void)setAlignmentType:;
- (long long)alignmentType;
- (void)setIsSelected:;
- (unsigned long long)textStyle;
- (BOOL)isSelected;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTextStyle:;
- (id)fontColor;
- (void)setFontColor:;
@end
