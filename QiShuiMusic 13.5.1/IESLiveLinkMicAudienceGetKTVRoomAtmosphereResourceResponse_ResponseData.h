@interface IESLiveLinkMicAudienceGetKTVRoomAtmosphereResourceResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray segmentsArray;
@property (nonatomic) Q segmentsArray_Count;
@property (nonatomic) NSMutableArray preludesArray;
@property (nonatomic) Q preludesArray_Count;
@property (nonatomic) NSMutableArray bridgeSegmentsArray;
@property (nonatomic) Q bridgeSegmentsArray_Count;
@property (nonatomic) NSMutableArray mainSegmentsArray;
@property (nonatomic) Q mainSegmentsArray_Count;
@property (nonatomic) NSMutableArray finaleSegmentsArray;
@property (nonatomic) Q finaleSegmentsArray_Count;
@property (nonatomic) NSMutableArray admissionSegmentsArray;
@property (nonatomic) Q admissionSegmentsArray_Count;
+ (id)descriptor;
@end
