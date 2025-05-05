@interface SAVCSPlayContent : SABaseClientBoundCommand
@property (nonatomic) NSString contentType;
@property (nonatomic) NSURL hiresTrailerUri;
@property (nonatomic) NSURL lowresTrailerUri;
@property (nonatomic) BOOL playTrailer;
@property (nonatomic) NSString utsId;
- (void)setContentType:;
- (id)groupIdentifier;
- (id)contentType;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)playTrailer;
- (void)setPlayTrailer:;
- (id)hiresTrailerUri;
- (void)setHiresTrailerUri:;
- (id)lowresTrailerUri;
- (void)setLowresTrailerUri:;
- (id)utsId;
- (void)setUtsId:;
+ (id)playContent;
+ (id)playContentWithDictionary:context:;
@end
