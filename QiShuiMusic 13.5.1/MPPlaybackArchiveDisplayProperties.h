@interface MPPlaybackArchiveDisplayProperties : NSObject
@property (nonatomic) NSMutableDictionary storage;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSData artworkImageData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStorage:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithBlock:;
- (void)encodeWithCoder:;
- (id)title;
- (id)storage;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)copyWithOptions:;
- (id)copyWithZone:;
- (void)setArtworkImageData:;
- (id)initWithTitle:subtitle:artworkImageData:;
- (id)artworkImageData;
+ (BOOL)supportsSecureCoding;
@end
