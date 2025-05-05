@interface GEOPointUtility : NSObject
+ (id)controlPoints:usesZilch:;
+ (unsigned long long)pointCount:usesZilch:;
+ (id)pointAt:pointData:usesZilch:;
+ (id)unpackPoints:usesZilch:;
+ (id)unpackZilchPoints:;
+ (id)unpackBasicPoints:;
+ (id)compressedZilchDataFromPoints:fromPointIndex:pointCount:;
+ (id)subdataFromPointData:fromPointIndex:usesZilch:;
+ (id)debugDescriptionForCompressedZilchData:;
@end
