@interface IESLiveSaaSPBFlexImageStruct : GPBMessage
@property (nonatomic) UIImage localImage;
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) GPBInt64Array flexSettingArray;
@property (nonatomic) Q flexSettingArray_Count;
@property (nonatomic) GPBInt64Array textSettingArray;
@property (nonatomic) Q textSettingArray_Count;
@property (nonatomic) q topBorderHeight;
- (id)localImage;
- (void)setLocalImage:;
+ (id)descriptor;
@end
