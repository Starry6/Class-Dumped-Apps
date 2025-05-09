@interface CIRedEyeRepair : NSObject
- (void)setColorSpace:;
- (void)setDebug:;
- (void)dealloc;
- (int)format;
- (BOOL)debug;
- (id)faces;
- (void)setLeft:;
- (void)repairExternalBuffer;
- (void)autoRepairWithFaceArray:;
- (id)repairArray;
- (void)executeRepair:;
- (id)repairs;
- (BOOL)getBlockSetWithImage:into:width:height:;
- (BOOL)getDataProviderBytePtrWithImage:into:width:height:;
- (BOOL)getDataProviderCopyWithImage:into:;
- (id)initWithCGImage:cameraModel:;
- (id)createRepairedImage;
- (id)initWithIOSurface:format:colorSpace:cameraModel:;
- (void)initializeNonDebugVariables;
- (id)initWithDeskView:andFrame:;
- (id)initWithFrameExternalBuffer:;
- (id)initWithExternalBuffer:size:rowBytes:;
- (id)initWithExternalBuffer:subRectangle:fullSize:rowBytes:cameraModel:;
- (BOOL)logRepairs;
- (void)setLogRepairs:;
- (int)redEyeThresholdKind;
- (void)setRedEyeThresholdKind:;
- (BOOL)renderAlpha;
- (void)setRenderAlpha:;
- (BOOL)infillBackground;
- (void)setInfillBackground:;
- (BOOL)renderSpecularShine;
- (void)setRenderSpecularShine:;
- (float)specularSize;
- (void)setSpecularSize:;
- (float)specularSoftness;
- (void)setSpecularSoftness:;
- (BOOL)pupilShadeAlignment;
- (void)setPupilShadeAlignment:;
- (BOOL)autoPupilTonality;
- (void)setAutoPupilTonality:;
- (BOOL)forceLoValue;
- (void)setForceLoValue:;
- (int)loValue;
- (void)setLoValue:;
- (id)standardTemplate;
- (int)nRepairs;
- (int)lastRepairTag;
- (void)undoRepair:;
- (int)averageValueFromY:withinSkinMask:butOutsideAlpha:;
- (float)upperRepairSizeFraction:;
- (float)lowerRepairSizeFraction:;
- (float)upperRepairSize:;
- (float)lowerRepairSize:;
- (BOOL)computeTrimmedBitmaps:newY:newCbCr:IR:newTrimY:newTrimCbCr:returningYR:andCbCrR:;
- (BOOL)extractReusableAlignedBitmapsAroundPoint:YR:subYBitmap:subCbCrBitmap:;
- (int)redEyeRemovalWithPoint:alignPupilShades:matching:force:IOD:tap:;
- (id)repairWithTag:;
- (int)redoRepairWithTag:IOD:;
- (void)redoLastRepair;
- (float)extractAverageFaceY:contrast:faceIndex:;
- (float)confidenceWithIOD:repair:andProminenceDifference:;
- (void)insertIntoProminenceVettingHopper:max:outside:confidence:distance:row:column:IOD:;
- (BOOL)gatherProminencesWithC:MC:maxwindowsize:repairsize:IR:fr:intoHopper:faceIndex:left:coss:sins:bitmapName:;
- (BOOL)gatherProminencesWithC:MC:altC:altMC:maxwindowsize:repairsize:IR:fr:intoHopper:faceIndex:left:;
- (BOOL)extractAndGatherProminencesWithRect:face:faceIndex:left:maxwindowsize:repairsize:returningRedHopper:whiteHopper:redChannel:redChannelMask:;
- (id)repairDecisionWithFaceRecord:left:redHopper:whiteHopper:;
- (int)applyEyeRepairWithEye:left:IOD:autoPupilTonality:match:faceIndex:whiteHopper:;
- (void)autoRepairExtractAndSearchLeft:right:data:repairSize:autoPupilTonality:faceIndex:;
- (int)distanceMaskFromPolyToCb:Cr:;
- (void)prepareLineFunctions;
- (void)skinInit;
- (int)redEyeRemovalWithData:;
- (BOOL)getFloat:d:s:;
- (BOOL)getInt:d:s:;
- (BOOL)getBool:d:s:;
- (void)orientRectangleMinX:maxX:minY:maxY:;
- (void)orientPointX:Y:;
- (void)executeRepairArray:;
- (void)setFaceIndex:;
+ (id)supportRectangleWithRepair:imageSize:;
+ (float)upperRepairDistanceFraction:;
+ (float)upperRepairDistance:;
+ (id)supportRectangleWithPoint:imageSize:IOD:;
+ (id)supportRectangleWithFaceArray:imageSize:;
@end
