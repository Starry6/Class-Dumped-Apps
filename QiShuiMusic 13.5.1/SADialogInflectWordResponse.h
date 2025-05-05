@interface SADialogInflectWordResponse : SABaseClientBoundCommand
@property (nonatomic) NSString print;
@property (nonatomic) NSString speak;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)print;
- (void)setPrint:;
- (id)speak;
- (void)setSpeak:;
+ (id)inflectWordResponse;
+ (id)inflectWordResponseWithDictionary:context:;
@end
