@interface MKTransitIcon : NSObject
@property (nonatomic) NSInteger iconType;
@property (nonatomic) I cartoID;
@property (nonatomic) I defaultTransitType;
@property (nonatomic) I iconAttributeKey;
@property (nonatomic) I iconAttributeValue;
@property (nonatomic) GEOStyleAttributes styleAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithKey:value:;
- (id)styleAttributes;
- (int)iconType;
- (unsigned int)cartoID;
- (unsigned int)defaultTransitType;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (id)initWithCartoId:defaultTransitType:;
@end
