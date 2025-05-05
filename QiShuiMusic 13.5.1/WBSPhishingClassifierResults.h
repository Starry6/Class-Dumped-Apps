@interface WBSPhishingClassifierResults : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) UIImage image;
@property (nonatomic) Q classification;
@property (nonatomic) NSString identifier;
@property (nonatomic) float confidence;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (float)confidence;
- (id)url;
- (id)identifier;
- (unsigned long long)classification;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)image;
- (id)initWithURL:image:classification:identifier:confidence:;
@end
