@interface PathCodec : NSObject
+ (id)decompress:;
+ (id)routingPathLegForData:;
+ (id)dataForRoutingPathLeg:;
+ (id)descriptionForRoutingPathLeg:;
+ (void)compressInPlace:;
+ (void)decompressInPlace:;
+ (id)compress:;
@end
