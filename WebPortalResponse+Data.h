/*=========================================================================
 Program:   OsiriX
 
 Copyright (c) OsiriX Team
 All rights reserved.
 Distributed under GNU - LGPL
 
 See http://www.osirix-viewer.com/copyright.html for details.
 
 This software is distributed WITHOUT ANY WARRANTY; without even
 the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 PURPOSE.
 =========================================================================*/

#import "WebPortalResponse.h"


@interface WebPortalResponse (Data)

-(void)processLoginHtml;
-(void)processIndexHtml;
-(void)processMainHtml;
-(void)processStudyListHtml;
-(void)processSeriesHtml;
-(void)processStudyHtml;
-(void)processPasswordForgottenHtml;
-(void)processAccountHtml;

-(void)processAdminIndexHtml;
-(void)processAdminUserHtml;

-(void)processStudyListJson;
-(void)processSeriesJson;
-(void)processAlbumsJson;
-(void)processSeriesListJson;

-(void)processWado;

-(void)processWeasisJnlp;
-(void)processWeasisXml;

-(void)processThumbnail;
-(void)processReport;
-(void)processSeriesPdf;
-(void)processZip;
-(void)processImage;
-(void)processMovie;

@end
