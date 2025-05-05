@interface VITextContext : NSObject
@property (nonatomic) NSString surroundingText;
@property (nonatomic) NSArray normalizedBoundingBoxes;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)normalizedBoundingBoxes;
- (id)initWithSurroundingText:normalizedBoundingBoxes:;
- (id)surroundingText;
@end
