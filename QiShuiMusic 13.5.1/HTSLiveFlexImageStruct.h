@interface HTSLiveFlexImageStruct : IESLivePBBaseMessage
@property (nonatomic) UIImage localImage;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSArray flexSetting;
@property (nonatomic) NSArray textSetting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) GPBInt64Array flexSettingArray;
@property (nonatomic) Q flexSettingArray_Count;
@property (nonatomic) GPBInt64Array textSettingArray;
@property (nonatomic) Q textSettingArray_Count;
@property (nonatomic) q topBorderHeight;
- (id)urlList;
- (id)flexSetting;
- (id)textSetting;
- (id)localImage;
- (void)setLocalImage:;
+ (id)descriptor;
@end
