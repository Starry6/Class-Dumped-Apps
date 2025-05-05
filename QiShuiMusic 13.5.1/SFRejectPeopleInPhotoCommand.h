@interface SFRejectPeopleInPhotoCommand : SFCommand
@property (nonatomic) NSArray rejectedPeople;
@property (nonatomic) SFPhotosLibraryImage photosLibraryImage;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)photosLibraryImage;
- (void)setPhotosLibraryImage:;
- (void)setRejectedPeople:;
- (id)rejectedPeople;
+ (BOOL)supportsSecureCoding;
@end
