@interface HTSLiveCommentMedal : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSMutableDictionary jumpSchema;
@property (nonatomic) Q jumpSchema_Count;
@property (nonatomic) HTSLiveImage keyboardImage;
@property (nonatomic) BOOL hasKeyboardImage;
+ (id)descriptor;
@end
