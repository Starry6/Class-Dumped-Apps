@interface BoxListResponse_BoxMeta : IESLivePBBaseMessage
@property (nonatomic) NSString titleDesc;
@property (nonatomic) NSString contentCountDesc;
@property (nonatomic) NSString contentAmountDesc;
@property (nonatomic) NSString animationDesc;
@property (nonatomic) NSString beforeUnpackDesc;
@property (nonatomic) NSString successUnpackDesc;
@property (nonatomic) NSString failUnpackDesc;
@property (nonatomic) HTSLiveImage adImage;
@property (nonatomic) BOOL hasAdImage;
@property (nonatomic) NSString imDesc;
+ (id)descriptor;
@end
