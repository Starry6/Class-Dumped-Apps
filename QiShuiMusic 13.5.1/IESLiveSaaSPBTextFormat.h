@interface IESLiveSaaSPBTextFormat : GPBMessage
@property (nonatomic) NSString color;
@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL italic;
@property (nonatomic) NSInteger weight;
@property (nonatomic) NSInteger italicAngle;
@property (nonatomic) NSInteger fontSize;
@property (nonatomic) BOOL useHeighLightColor;
@property (nonatomic) BOOL useRemoteClor;
+ (id)descriptor;
@end
