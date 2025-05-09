@interface PLExtendedAttributes : PLManagedObject
@property (nonatomic) NSNumber aperture;
@property (nonatomic) NSNumber bitrate;
@property (nonatomic) NSString cameraModel;
@property (nonatomic) NSString cameraMake;
@property (nonatomic) NSString codec;
@property (nonatomic) NSDate dateCreated;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSNumber exposureBias;
@property (nonatomic) NSNumber flashFired;
@property (nonatomic) NSNumber focalLength;
@property (nonatomic) NSNumber focalLengthIn35mm;
@property (nonatomic) NSNumber fps;
@property (nonatomic) NSNumber iso;
@property (nonatomic) NSString lensModel;
@property (nonatomic) NSNumber meteringMode;
@property (nonatomic) NSNumber sampleRate;
@property (nonatomic) NSNumber shutterSpeed;
@property (nonatomic) NSNumber trackFormat;
@property (nonatomic) NSNumber whiteBalance;
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber longitude;
@property (nonatomic) NSNumber slushSceneBias;
@property (nonatomic) NSNumber slushWarmthBias;
@property (nonatomic) NSNumber slushVersion;
@property (nonatomic) NSNumber slushPreset;
@property (nonatomic) NSString timezoneName;
@property (nonatomic) NSNumber timezoneOffset;
@property (nonatomic) NSNumber digitalZoomRatio;
@property (nonatomic) PLManagedAsset asset;
- (id)payloadID;
- (id)payloadForChangedKeys:;
- (id)formattedCameraModel;
+ (id)entityName;
+ (id)distinctValuesForKeyPath:inManagedObjectContext:;
@end
