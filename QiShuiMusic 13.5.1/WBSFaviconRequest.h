@interface WBSFaviconRequest : WBSSiteMetadataRequest
@property (nonatomic) Q type;
@property (nonatomic) {CGSize=dd} iconSize;
@property (nonatomic) Q fallbackType;
@property (nonatomic) BOOL isURLTypedByUser;
@property (nonatomic) {CGSize=dd} sizeForDrawing;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconSize;
- (id)uniqueIdentifier;
- (unsigned long long)type;
- (id)sizeForDrawing;
- (unsigned long long)fallbackType;
- (id)initWithURL:extraInfo:;
- (id)initWithDomain:iconSize:fallbackType:;
- (id)initWithURL:iconSize:fallbackType:;
- (id)initWithURL:iconSize:fallbackType:isURLTypedByUser:;
- (id)_initWithURL:type:iconSize:fallbackType:isURLTypedByUser:;
- (BOOL)isURLTypedByUser;
@end
