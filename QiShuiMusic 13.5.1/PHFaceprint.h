@interface PHFaceprint : NSObject
@property (nonatomic) q faceprintVersion;
@property (nonatomic) NSData faceprintData;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithFaceprintData:faceprintVersion:;
- (long long)faceprintVersion;
- (id)faceprintData;
@end
