@interface HTSLiveCastScreenData : IESLivePBBaseMessage
@property (nonatomic) NSString showText;
@property (nonatomic) GPBInt64Array allowListArray;
@property (nonatomic) Q allowListArray_Count;
@property (nonatomic) NSInteger sdkVersion;
@property (nonatomic) HTSLiveCastOttPermission permission;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) NSInteger forceCastOnly;
+ (id)descriptor;
@end
