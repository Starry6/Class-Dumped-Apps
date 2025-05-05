@interface TRIPBUninterpretedOption_NamePart : TRIPBMessage
@property (nonatomic) NSString namePart;
@property (nonatomic) BOOL hasNamePart;
@property (nonatomic) BOOL isExtension;
@property (nonatomic) BOOL hasIsExtension;
+ (id)descriptor;
@end
