@interface GEOStorefrontImagery : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic) S bucketId;
@property (nonatomic) I buildId;
@property (nonatomic) Q timestamp;
@property (nonatomic) double groundAltitude;
@property (nonatomic) {GEOOrientedPosition={?=ddd}fff} position;
@property (nonatomic) NSArray cameras;
@property (nonatomic) I dataFormatVersion;
- (id)position;
- (id)init;
- (double)groundAltitude;
- (unsigned long long)identifier;
- (unsigned int)dataFormatVersion;
- (void).cxx_destruct;
- (unsigned long long)timestamp;
- (unsigned short)bucketId;
- (id)initWithPhotoPosition:;
- (unsigned int)buildId;
- (id)cameras;
@end
