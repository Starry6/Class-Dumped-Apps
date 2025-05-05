@interface HTSLivePackMetaInfo : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) NSString env;
@property (nonatomic) NSString dc;
@property (nonatomic) NSString traceId;
@property (nonatomic) NSString cluster;
@property (nonatomic) NSMutableDictionary extras;
@property (nonatomic) Q extras_Count;
+ (id)descriptor;
@end
