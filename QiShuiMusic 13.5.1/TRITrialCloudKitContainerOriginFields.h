@interface TRITrialCloudKitContainerOriginFields : PBCodable
@property (nonatomic) BOOL hasCkEnvironment;
@property (nonatomic) NSInteger ckEnvironment;
@property (nonatomic) BOOL hasCkContainer;
@property (nonatomic) NSInteger ckContainer;
- (int)ckContainer;
- (void)writeTo:;
- (id)ckEnvironmentAsString:;
- (unsigned long long)hash;
- (void)copyTo:;
- (int)StringAsCkContainer:;
- (void)mergeFrom:;
- (void)setCkEnvironment:;
- (void)setCkContainer:;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasCkContainer;
- (id)ckContainerAsString:;
- (id)dictionaryRepresentation;
- (int)ckEnvironment;
- (int)StringAsCkEnvironment:;
- (BOOL)hasCkEnvironment;
- (BOOL)isEqual:;
- (void)setHasCkContainer:;
- (void)setHasCkEnvironment:;
- (id)copyWithZone:;
@end
