@interface IESECCommentItemViewLayout : NSObject
@property (nonatomic) q style;
@property (nonatomic) q titleLine;
@property (nonatomic) double normalHorizontalSpace;
@property (nonatomic) double normalVerticalSpace;
- (double)normalHorizontalSpace;
- (double)normalVerticalSpace;
- (void)setNormalHorizontalSpace:;
- (void)setNormalVerticalSpace:;
- (void)setTitleLine:;
- (long long)titleLine;
- (void)setStyle:;
- (long long)style;
+ (double)heightForMediasCount:layoutStyle:verticalSpace:horizontalSpace:;
+ (id)contentFont;
+ (double)contentLineSpaceFromFont:;
+ (double)itemHeightForMediaCount:layoutStyle:horizontalSpace:;
@end
