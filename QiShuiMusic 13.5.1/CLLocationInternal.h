@interface CLLocationInternal : NSObject
- (void)dealloc;
- (id)initWithClientLocation:;
- (id)initWithClientLocation:matchInfo:trustedTimestamp:groundAltitude:;
- (id)initWithClientLocation:coarseMetaData:;
- (id)initWithClientLocation:clientLocationPrivate:coarseMetaData:;
- (id)initWithClientLocation:matchInfo:trustedTimestamp:groundAltitude:fusionInfo:rawHorizontalAccuracy:rawAltitude:rawVerticalAccuracy:rawCourseAccuracy:positionContextStateType:probabilityPositionContextStateIndoor:probabilityPositionContextStateOutdoor:gnssOdometerInfo:;
- (id)initWithClientLocation:matchInfo:trustedTimestamp:groundAltitude:fusionInfo:rawHorizontalAccuracy:rawAltitude:rawVerticalAccuracy:rawCourseAccuracy:positionContextStateType:probabilityPositionContextStateIndoor:probabilityPositionContextStateOutdoor:gnssOdometerInfo:coarseMetaData:;
- (id)initWithClientLocation:clientLocationPrivate:;
- (id)copyWithZone:;
@end
