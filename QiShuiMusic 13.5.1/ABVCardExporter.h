@interface ABVCardExporter : NSObject
+ (id)_vCard21RepresentationOfRecords:;
+ (id)_vCard30RepresentationOfRecords:;
+ (id)vCardRepresentationOfRecords:mode:;
+ (id)vCardRepresentationOfRecord:mode:;
@end
