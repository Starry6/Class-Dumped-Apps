@interface SALocalSearchPhoto : AceObject
@property (nonatomic) NSURL fullsize;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSURL largeSize;
@property (nonatomic) NSURL maximumSize;
@property (nonatomic) SAUIAppPunchOut photoPunchOut;
@property (nonatomic) NSURL thumbnail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setThumbnail:;
- (id)groupIdentifier;
- (void)setMaximumSize:;
- (id)identifier;
- (id)thumbnail;
- (id)encodedClassName;
- (id)maximumSize;
- (void)setIdentifier:;
- (id)fullsize;
- (void)setFullsize:;
- (id)largeSize;
- (void)setLargeSize:;
- (id)photoPunchOut;
- (void)setPhotoPunchOut:;
+ (id)photo;
+ (id)photoWithDictionary:context:;
@end
