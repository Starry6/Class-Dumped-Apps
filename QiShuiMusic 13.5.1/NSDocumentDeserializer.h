@interface NSDocumentDeserializer : NSAKDeserializer
- (id)deserializeNewData;
- (id)deserializeNewPList;
- (void)fixupDirInfo:;
@end
