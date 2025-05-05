@interface SAVCSPlayTrailer : SAAceView
@property (nonatomic) NSString contentType;
@property (nonatomic) NSURL hiresTrailerUri;
@property (nonatomic) SAUIImageResource image;
@property (nonatomic) NSURL lowresTrailerUri;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString utsId;
- (void)setContentType:;
- (id)url;
- (id)groupIdentifier;
- (id)contentType;
- (void)setImage:;
- (void)setUrl:;
- (id)encodedClassName;
- (id)image;
- (id)hiresTrailerUri;
- (void)setHiresTrailerUri:;
- (id)lowresTrailerUri;
- (void)setLowresTrailerUri:;
- (id)utsId;
- (void)setUtsId:;
+ (id)playTrailer;
+ (id)playTrailerWithDictionary:context:;
@end
