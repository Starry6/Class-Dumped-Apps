@interface SFMessageAttachment : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) NSURL url;
@property (nonatomic) NSData linkMetadata;
@property (nonatomic) SFPhotosLibraryImage photosLibraryImage;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (id)initWithProtobuf:;
- (void)setType:;
- (BOOL)hasType;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (int)type;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)linkMetadata;
- (void)setLinkMetadata:;
- (id)photosLibraryImage;
- (void)setPhotosLibraryImage:;
+ (BOOL)supportsSecureCoding;
@end
